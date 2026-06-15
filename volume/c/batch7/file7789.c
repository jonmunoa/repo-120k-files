// fichero 7789 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7789;

Registro7789 crear_registro7789(int id) {
    Registro7789 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
