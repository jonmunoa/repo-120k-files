// fichero 27773 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27773;

Registro27773 crear_registro27773(int id) {
    Registro27773 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
