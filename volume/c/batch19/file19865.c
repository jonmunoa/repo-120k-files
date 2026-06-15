// fichero 19865 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19865;

Registro19865 crear_registro19865(int id) {
    Registro19865 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
