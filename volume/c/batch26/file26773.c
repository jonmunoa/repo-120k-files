// fichero 26773 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26773;

Registro26773 crear_registro26773(int id) {
    Registro26773 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
