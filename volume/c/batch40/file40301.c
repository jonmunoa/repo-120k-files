// fichero 40301 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40301;

Registro40301 crear_registro40301(int id) {
    Registro40301 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
