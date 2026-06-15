// fichero 41645 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41645;

Registro41645 crear_registro41645(int id) {
    Registro41645 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
