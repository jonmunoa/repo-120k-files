// fichero 38849 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38849;

Registro38849 crear_registro38849(int id) {
    Registro38849 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
