// fichero 48785 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48785;

Registro48785 crear_registro48785(int id) {
    Registro48785 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
