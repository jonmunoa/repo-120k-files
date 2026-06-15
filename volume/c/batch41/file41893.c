// fichero 41893 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41893;

Registro41893 crear_registro41893(int id) {
    Registro41893 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
