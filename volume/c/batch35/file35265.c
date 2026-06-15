// fichero 35265 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35265;

Registro35265 crear_registro35265(int id) {
    Registro35265 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
