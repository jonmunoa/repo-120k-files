// fichero 42773 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42773;

Registro42773 crear_registro42773(int id) {
    Registro42773 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
