// fichero 1785 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1785;

Registro1785 crear_registro1785(int id) {
    Registro1785 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
