// fichero 41313 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41313;

Registro41313 crear_registro41313(int id) {
    Registro41313 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
