// fichero 41529 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41529;

Registro41529 crear_registro41529(int id) {
    Registro41529 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
