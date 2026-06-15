// fichero 7785 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7785;

Registro7785 crear_registro7785(int id) {
    Registro7785 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
