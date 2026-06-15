// fichero 36785 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36785;

Registro36785 crear_registro36785(int id) {
    Registro36785 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
