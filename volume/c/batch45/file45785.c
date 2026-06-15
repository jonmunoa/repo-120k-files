// fichero 45785 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45785;

Registro45785 crear_registro45785(int id) {
    Registro45785 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
