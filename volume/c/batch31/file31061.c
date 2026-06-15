// fichero 31061 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31061;

Registro31061 crear_registro31061(int id) {
    Registro31061 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
