// fichero 20993 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20993;

Registro20993 crear_registro20993(int id) {
    Registro20993 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
