// fichero 3893 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3893;

Registro3893 crear_registro3893(int id) {
    Registro3893 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
