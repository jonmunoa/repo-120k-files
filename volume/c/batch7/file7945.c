// fichero 7945 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7945;

Registro7945 crear_registro7945(int id) {
    Registro7945 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
