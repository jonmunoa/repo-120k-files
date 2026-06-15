// fichero 31785 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31785;

Registro31785 crear_registro31785(int id) {
    Registro31785 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
