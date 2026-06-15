// fichero 8773 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8773;

Registro8773 crear_registro8773(int id) {
    Registro8773 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
