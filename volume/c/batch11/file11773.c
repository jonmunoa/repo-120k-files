// fichero 11773 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11773;

Registro11773 crear_registro11773(int id) {
    Registro11773 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
