// fichero 26741 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26741;

Registro26741 crear_registro26741(int id) {
    Registro26741 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
