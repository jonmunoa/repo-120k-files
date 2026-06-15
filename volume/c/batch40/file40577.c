// fichero 40577 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40577;

Registro40577 crear_registro40577(int id) {
    Registro40577 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
