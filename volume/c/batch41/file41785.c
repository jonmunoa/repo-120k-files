// fichero 41785 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41785;

Registro41785 crear_registro41785(int id) {
    Registro41785 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
