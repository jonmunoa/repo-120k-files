// fichero 1913 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1913;

Registro1913 crear_registro1913(int id) {
    Registro1913 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
