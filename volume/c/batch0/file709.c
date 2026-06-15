// fichero 709 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro709;

Registro709 crear_registro709(int id) {
    Registro709 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
