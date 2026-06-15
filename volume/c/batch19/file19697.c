// fichero 19697 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19697;

Registro19697 crear_registro19697(int id) {
    Registro19697 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
