// fichero 18785 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18785;

Registro18785 crear_registro18785(int id) {
    Registro18785 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
