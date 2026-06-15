// fichero 37501 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37501;

Registro37501 crear_registro37501(int id) {
    Registro37501 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
