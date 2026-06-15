// fichero 6965 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6965;

Registro6965 crear_registro6965(int id) {
    Registro6965 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
