// fichero 4785 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4785;

Registro4785 crear_registro4785(int id) {
    Registro4785 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
