// fichero 35301 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35301;

Registro35301 crear_registro35301(int id) {
    Registro35301 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
