// fichero 43181 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43181;

Registro43181 crear_registro43181(int id) {
    Registro43181 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43181(Registro43181 r) {
    return r.valor + r.id;
}
