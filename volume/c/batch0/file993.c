// fichero 993 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro993;

Registro993 crear_registro993(int id) {
    Registro993 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
