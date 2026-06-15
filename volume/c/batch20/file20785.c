// fichero 20785 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20785;

Registro20785 crear_registro20785(int id) {
    Registro20785 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
