// fichero 31993 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31993;

Registro31993 crear_registro31993(int id) {
    Registro31993 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
