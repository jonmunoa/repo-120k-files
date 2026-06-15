// fichero 12213 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12213;

Registro12213 crear_registro12213(int id) {
    Registro12213 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
