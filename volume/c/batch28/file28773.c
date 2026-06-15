// fichero 28773 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28773;

Registro28773 crear_registro28773(int id) {
    Registro28773 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
