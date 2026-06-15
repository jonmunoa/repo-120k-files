// fichero 40489 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40489;

Registro40489 crear_registro40489(int id) {
    Registro40489 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
