// fichero 44993 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44993;

Registro44993 crear_registro44993(int id) {
    Registro44993 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
