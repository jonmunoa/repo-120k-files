// fichero 3773 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3773;

Registro3773 crear_registro3773(int id) {
    Registro3773 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
