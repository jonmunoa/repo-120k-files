// fichero 3841 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3841;

Registro3841 crear_registro3841(int id) {
    Registro3841 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
