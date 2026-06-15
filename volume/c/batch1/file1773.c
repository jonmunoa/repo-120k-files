// fichero 1773 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1773;

Registro1773 crear_registro1773(int id) {
    Registro1773 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
