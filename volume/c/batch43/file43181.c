// fichero 43181 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43181;

Registro43181 crear_registro43181(int id) {
    Registro43181 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
