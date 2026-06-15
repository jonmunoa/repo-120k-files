// fichero 24773 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24773;

Registro24773 crear_registro24773(int id) {
    Registro24773 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
