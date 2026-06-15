// fichero 28965 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28965;

Registro28965 crear_registro28965(int id) {
    Registro28965 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
