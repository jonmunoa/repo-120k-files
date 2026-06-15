// fichero 3265 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3265;

Registro3265 crear_registro3265(int id) {
    Registro3265 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
