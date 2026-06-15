// fichero 29881 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29881;

Registro29881 crear_registro29881(int id) {
    Registro29881 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
