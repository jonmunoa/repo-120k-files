// fichero 5785 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5785;

Registro5785 crear_registro5785(int id) {
    Registro5785 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
