// fichero 10317 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10317;

Registro10317 crear_registro10317(int id) {
    Registro10317 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10317(Registro10317 r) {
    return r.valor + r.id;
}
