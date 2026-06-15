// fichero 30773 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30773;

Registro30773 crear_registro30773(int id) {
    Registro30773 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
