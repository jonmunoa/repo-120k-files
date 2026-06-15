// fichero 47301 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47301;

Registro47301 crear_registro47301(int id) {
    Registro47301 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
