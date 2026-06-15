// fichero 38785 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38785;

Registro38785 crear_registro38785(int id) {
    Registro38785 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
