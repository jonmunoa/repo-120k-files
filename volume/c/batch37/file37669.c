// fichero 37669 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37669;

Registro37669 crear_registro37669(int id) {
    Registro37669 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
